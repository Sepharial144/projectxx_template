Net-utils
Net-utils it is utiils for testings protocol.

# Install to certain directory
cmake . -Bbuild

# Build in debug mode
cmake --build build --config Debug -j

# Build in release mode
cmake --build build --config Release -j

# Install to certain directory
cmake --install build --config Debug --prefix "include"