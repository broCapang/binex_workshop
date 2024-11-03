FROM ubuntu:22.04

# Install necessary dependencies
RUN apt-get update && apt-get install -y \
    socat \
    && rm -rf /var/lib/apt/lists/*

# Add a non-privileged user to run the challenge
RUN useradd -m pwnuser

# Copy the source code and flag
COPY ./chall /home/pwnuser/chall
COPY ./flag /flag

# Expose the port
EXPOSE 10005

# Switch to the non-privileged user
USER pwnuser

# Start socat directly
CMD ["socat", "TCP-LISTEN:10005,reuseaddr,fork", "EXEC:/home/pwnuser/chall,pty,echo=0,raw,iexten=0"]

