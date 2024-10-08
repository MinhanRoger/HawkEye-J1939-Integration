Welcome to HawkEye, your gateway to integrating the Texas Instruments AWRL1432 radar sensor with the J1939 protocol. This repository is a treasure trove of drivers, sample code, and detailed documentation to help you harness the full potential of the AWRL1432 in your automotive projects.

## Features

- **Advanced Drivers**: Robust and efficient drivers tailored for the AWRL1432 radar sensor.
- **Illustrative Sample Code**: Practical examples showcasing the integration of the AWRL1432 with the J1939 protocol.
- **Comprehensive Documentation**: In-depth guides and API references to support your development journey.

## Getting Started

### Prerequisites

- **Hardware**: Texas Instruments AWRL1432 radar sensor module.
- **Software**: TI Code Composer Studio (CCS) or an equivalent IDE.
- **Libraries**: Required J1939 protocol stack.

### Code Documentation

- **`testAAA`**: Sends a predefined set of data using the J1939 protocol. It is specifically associated with the PGN (Parameter Group Number) 64768.
- **`testBBB`**: Sends a predefined set of data using the J1939 protocol. It is specifically associated with the PGN 64769.
- **`j1939_initialization`**: Initializes the J1939 protocol, registers the PGN request handlers, and starts the J1939 task.
- **`req_callbacks_table`**: Used to register specific callback functions while receiving PGNs.
- **`j1939_Register_Cmd_Handler`**: Although similar to `j1939_Register_Req_Handler` in usage, this function is intended for registering command handlers. The corresponding implementation for this function needs to be developed by the user, as it is not provided in the sample code.

Replace `CAN_FUNCTION` and `CAN_INTERRUPT_CALLBACK` with your specific CAN communication function and the interrupt callback function, respectively.

### Usage

1. Link the library.
2. Fill in the PGN and handler function.

## License

HawkEye is released under a free open-source license. You are free to use, modify, and distribute this software without any restrictions. You are not required to credit the original authors or retain any original copyright notices.

## Contact

For any questions, issues, or suggestions, please open an issue on this repository.
