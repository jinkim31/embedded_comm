# Embedded Comm
Lightweight embedded communication library

## Packet Structure
- ### RS485

| Header 0 | Header 1 | ID  | Command | Arg length low | Arg length high | Arg 0 | ... | Arg n | CRC16 low | CRC16 high |
|----------|----------|-----|---------|----------------|-----------------|-------|-----|-------|-----------|------------|
| 0xEC     | 0XFC     |     |         |                |                 |       |     |       |           |            |

- ### Ethernet

| Header 0 | Header 1 | IP 0 | IP 1 | IP 2 | IP 3 | Command | Arg length low | Arg length high | Arg 0 | ... | Arg n | CRC16 low | CRC16 high |
|----------|----------|------|------|------|------|---------|----------------|-----------------|-------|-----|-------|-----------|------------|
| 0xEC     | 0XFC     |      |      |      |      |         |                |                 |       |     |       |           |            |

- ### Response from device

| Header 0 | Header 1 | Error Code | Response length low | Response length high | Response 0 | ... | Response n | CRC16 low | CRC16 high |
|----------|----------|------------|---------------------|----------------------|------------|-----|------------|-----------|------------|
| 0xEC     | 0XFC     |            |                     |                      |            |     |            |           |            |

## Command & args
- ### Ping
- ### Read

| Command | Arg length low | Arg length high | Arg 0 | Arg 1           | Arg 2         | Arg 3           | Arg 4         | ... |
|---------|----------------|-----------------|-------|-----------------|---------------|-----------------|---------------|-----|
| 1       |                |                 | type  | 1st range start | 1st range end | 2nd range start | 2nd range end |     |


- ### Write
