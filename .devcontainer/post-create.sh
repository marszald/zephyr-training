#!/bin/bash
set -e

echo "Running Zephyr environment setup..."
.devcontainer/setup-zephyr.sh

echo "Installing CMSIS packs..."
.devcontainer/install-packs.sh

echo "Post-create complete."
