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

Replace `CAN_FUNCTION` and `CAN_INTERRUPT_CALLBACK` with your specific CAN communication function and the interrupt callback function, respectively.

### Usage

1. Link the library.
2. Fill in the PGN and handler function.

## License

HawkEye is licensed under the MIT License.

## Contact

For any questions, issues, or suggestions, please open an issue on this repository.