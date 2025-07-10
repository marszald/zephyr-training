# Zephyr Training Environment

Welcome to the Zephyr RTOS training! This repository includes a ready-to-use development environment based on Zephyr 4.1, which you can set up in one of three ways:

---

## Option 1: VS Code + Dev Containers (Recommended)

1. **Install:**
   - [VS Code](https://code.visualstudio.com/)
   - [Dev Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)
   - [Docker](https://docs.docker.com/engine/install/)

2. **Open in VS Code:**

   * Launch VS Code
   * Select: **“Reopen in Container”** when prompted
   * Wait for setup to complete (Zephyr modules will be downloaded)

---

## Option 2: Devcontainer CLI (Headless)

> Ideal for those not using VS Code but still wanting a containerized environment.

1. **Install:**

   * [Docker](https://docs.docker.com/engine/install/)
   * [Devcontainer CLI](https://github.com/devcontainers/cli?tab=readme-ov-file#try-it-out)

2. **Run the dev container:**

   ```bash
   devcontainer up --workspace-folder .
   devcontainer exec --workspace-folder . zsh
   ```

---

## ⚙️ Option 3: Manual Zephyr Setup (Bare Metal)

These, who want to run Zephyr directly on their system without containers - need to check [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#).

---

## 🏗️ Build & Run the Example App

Once your environment is ready, you can build and run the training application using the native simulator:

```bash
# Build for the native simulator
west build --board native_sim app

# Run the built application
west build --target run
```

Expected output:

```
*** Booting Zephyr OS build v4.1.0 ***
[00:00:00.000,000] <inf> main: LED state: OFF
[00:00:01.010,000] <inf> main: LED state: ON
```
