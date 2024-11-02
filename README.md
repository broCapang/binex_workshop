
# Binary Exploitation Workshop

A 3-hour hands-on workshop scheduled for November 9, 2024, with materials that may be reused for future sessions.

## Author

- [@capangjabba](https://www.github.com/broCapang)




## Installation

1. **Install Ubuntu 22.04 Virtual Machine**  
   _Optional but highly recommended._  
   Having an Ubuntu 22.04 virtual environment ensures compatibility with the tools and exercises we’ll use. You can install it using [VirtualBox](https://www.virtualbox.org/) or [VMware](https://www.vmware.com/) if you prefer.

2. **Install Development Tools**  
   Please ensure the following tools are installed within the VM or your local machine:
   
   - **gcc** - GNU Compiler Collection, needed for compiling C programs.  
     ```bash
     sudo apt update && sudo apt install -y gcc
     ```

   - **gdb** - GNU Debugger, essential for debugging.
     ```bash
     sudo apt install -y gdb
     ```

   - **pwndbg plugin** - GDB plugin for enhanced debugging.
     ```bash
     # Install pwndbg
     git clone https://github.com/pwndbg/pwndbg
     cd pwndbg
     ./setup.sh
     ```

   - **ropgadget** - Tool to find ROP gadgets in binaries.
     ```bash
     pip install ropgadget
     ```

   - **pwntools** - CTF framework and exploit development library.
     ```bash
     pip install pwntools
     ```

   - **objdump** - Displays information from object files.
     ```bash
     sudo apt install -y binutils
     ```

3. **Install Docker**  
   Docker is required for containerized environments during the workshop.
   ```bash
   sudo apt update
   sudo apt install -y docker.io
   sudo apt install -y docker-compose
   ```

   

## Documentation




