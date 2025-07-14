#!/bin/bash
set -e

echo "Installing CMSIS Pack Manager with timeout fix..."
pip install cmsis-pack-manager==0.6.0

echo "Updating pack index..."
pyocd pack update

echo "Installing MCXA156 pack..."
pyocd pack install mcxa156

echo "CMSIS pack installation complete."
