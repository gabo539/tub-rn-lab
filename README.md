# tub-rn-lab

This project implements a distributed web server with DHT (Distributed Hash Table) functionality. The system consists of multiple components and features:

## Core Features

### Web Server

- Handles HTTP requests (GET, PUT, DELETE)
- Serves both static and dynamic content
- Implements proper HTTP status codes and headers
- Processes requests for resources stored in the DHT

### Distributed Hash Table (DHT)

- Implements a Chord-based DHT protocol
- Supports both static and dynamic node management
- Uses UDP for inter-node communication
- Features include:
  - Resource lookup and routing
  - Node join operations
  - Periodic stabilization
  - Successor and predecessor management

### Communication

- HTTP over TCP for client-server communication
- UDP for DHT inter-node messaging
- Support for various message types (Lookup, Join, Stabilize, Notify)

## Setup

1. `git clone` & `cd tub-rn-lab-1`
2. Open CLion @ `tub-rn-lab-1`
3. In the dialog enter 'build' as the build directory here: 
   
   ![279518875-84040d89-7bf6-4010-b69c-cbc1e50fdcb6.png](https://github.com/gabo539/tub-rn-lab/blob/main/279518875-84040d89-7bf6-4010-b69c-cbc1e50fdcb6.png?raw=true)
   
   
   
    & hit OK.
4. You're ready to go!

See [here](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html#targets-configs) for instructions on creating new files etc. in CLion CMake projects.
