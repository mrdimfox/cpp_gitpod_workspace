FROM gitpod/workspace-full

# RUN apt-get update && apt-get install -y --no-install-recommends \
#   \
#   && rm -rf /var/lib/apt/lists/*

RUN pip install cmake-format