#!/bin/bash
cd ~/low_level_engineering
WINDOWS_DSA="/mnt/d/DSA/"
LINUX_DSA="$HOME/low_level_engineering/dsa/"

echo "Syncing raw VS Code files from Windows D: drive to Linux"
rsync -auv --exclude='.git/' --exclude='push_dsa.sh' "$WINDOWS_DSA" "$LINUX_DSA"

echo ""
read -p "Enter custom commit message (or press Enter for dynamic file-based defaults): " custom_msg

# DSA REPOSITORY

echo ""
echo "Processing DSA Repository..."
cd "$LINUX_DSA"
git add .

if [ -z "$custom_msg" ]; then
    dsa_changes=$(git diff --cached --name-status | sed 's/\t/: /' | paste -sd ", " -)
    if [ -z "$dsa_changes" ]; then
        commit_msg_dsa=""
    else
        commit_msg_dsa="DSA Auto-Sync [ $dsa_changes ]"
    fi
else
    commit_msg_dsa="$custom_msg"
fi

if [ -z "$commit_msg_dsa" ]; then
    echo "No adjustments found in DSA folder. Skipping repository push."
else
    echo "Pushing to DSA GitHub repository with message: '$commit_msg_dsa'"
    git commit -m "$commit_msg_dsa"
    git push origin main
fi

#PIPELINE B: MAIN LOW LEVEL ENGINEERING

echo ""
echo "Processing low level engineering Workspace..."
cd "$HOME/low_level_engineering"
git add .

if [ -z "$custom_msg" ]; then
    loe_changes=$(git diff --cached --name-status | sed 's/\t/: /' | paste -sd ", " -)
    if [ -z "$loe_changes" ]; then
        commit_msg_loe=""
    else
        commit_msg_loe="Portfolio Auto-Sync [ $loe_changes ]"
    fi
else
    commit_msg_loe="$custom_msg"
fi

if [ -z "$commit_msg_loe" ]; then
    echo "No adjustments found in Labs or CS50. Skipping repository push."
else
    echo "Pushing to low_level_engineering GitHub portfolio with message: '$commit_msg_loe'"
    git commit -m "$commit_msg_loe"
    git push origin main
fi

echo ""
echo "sync execution completed. All repositories are up to date."
