#!/bin/bash
set -e

echo "Fixing permissions"
sudo chown -R $(whoami):$(whoami) $(pwd)/deps

echo "Exporting Zephyr environment..."

# (Re)initialize west workspace
west init -l app || echo "west already initialized"
west update
west zephyr-export

# Setup shell environment
echo 'source $(pwd)/deps/zephyr/zephyr-env.sh' >> $HOME/.zshrc

# West completion
west completion zsh > $HOME/west-completion.zsh
echo 'source $HOME/west-completion.zsh' >> $HOME/.zshrc

echo "Done. You can now build Zephyr apps!"
