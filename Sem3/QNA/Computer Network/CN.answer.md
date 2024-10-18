# Computer Networks QB

## Unit 1

1. **Write a short note on : Computer Networks.**  
    _A computer network is a collection of interconnected devices that communicate with one another to share resources and data. These devices, known as nodes, include computers, servers, and other hardware such as printers and routers. The network allows data to flow between these devices either through physical media (cables, fiber optics) or wireless methods (Wi-Fi, Bluetooth)._

   **Key Components:**

   a. **Nodes**: _Devices on the network._  
    b. **Links**: _The communication channels (cables, wireless signals) between nodes._  
    c. **Protocols**: _Rules governing data exchange (e.g., TCP/IP)._

   **Benefits**:

   **Data Sharing**: _Files can be easily shared among connected devices._  
   **Resource Sharing**: _Devices can access shared resources such as printers or storage systems._
   **Communication**: _Enables communication via emails, video conferencing, and messaging._

   **Types:**

   1. **LAN (Local Area Network)**: _A small-scale network within a building or campus._
   2. **WAN (Wide Area Network):** _A larger network connecting geographically distant locations, such as different cities or countries._

   3. **MAN (Metropolitan Area Network)**: _Covers a larger area than a LAN but is smaller than a WAN, such as a city._

   The Internet is the largest WAN and connects millions of smaller networks across the globe. Computer networks have revolutionized how we communicate, share data, and access information.

2. **Compare LAN,WAN and MAN.**  
   Feature LAN (Local Area Network) MAN (Metropolitan Area Network) WAN (Wide Area Network)
   Geographical Area Covers a small area like a building or campus Covers a city or a large university Covers large areas such as countries
   Speed Very high (up to 1 Gbps or more) Moderate (up to 100 Mbps) Moderate to low (ranging from 10 Mbps to 100 Mbps)
   Cost Low as it uses limited resources Medium, more costly than LAN High, involving multiple infrastructures
   Technology Ethernet, Wi-Fi Fiber optics, wireless MPLS, satellite, leased lines
   Ownership Owned by individual organizations Managed by service providers Often managed by telecommunication providers
   LAN: Suitable for small offices or homes where high-speed connections are needed at a low cost.

   MAN: Often used by businesses or universities within a city, providing connectivity between multiple buildings.

   WAN: Used for large organizations spread across different geographic regions. The Internet is the most common example of a WAN.

3. **Briefly explain layered structure of OSI Model**.  
   _The OSI (Open Systems Interconnection) model is a conceptual framework used to understand and implement network communication. It divides the communication process into seven layers, each responsible for a specific aspect of data transfer._

   1. **Physical Layer**: _This is the lowest layer, responsible for transmitting raw bits over a physical medium such as cables or radio waves. It deals with the physical aspects like voltage levels, timing, and connectors._

   2. **Data Link Layer**: T*his layer ensures error-free transmission between two directly connected nodes. It breaks data into frames, adds physical (MAC) addresses, and performs error detection.*

   3. **Network Layer**: _Responsible for logical addressing (IP addresses) and routing data packets across different networks. It determines the best path for data to reach its destination._

   4. **Transport Layer**: _This layer ensures reliable data transfer, using protocols like TCP (Transmission Control Protocol) for flow control, error detection, and segmentation of data into smaller pieces for transmission._

   5. **Session Layer:** _Manages sessions or dialogues between applications, ensuring that sessions are established, maintained, and terminated properly._

   6. **Presentation Layer**: _Translates data between the application and network formats, handling encryption, compression, and data encoding._

   7. **Application Layer:** _The topmost layer interacts directly with applications and provides services like email (SMTP), file transfer (FTP), and web browsing (HTTP)._

   Each layer performs its specific functions, ensuring that data is transferred from the sender to the receiver reliably and efficiently.

4. **Classify different network connecting devices**.  
   _Network devices are essential components that allow communication within and between networks. Below are some common network devices:_

   **Router**: _A router is a device that forwards data packets between networks, based on their IP addresses. It directs traffic between different LANs or WANs, determining the best path for data to take._

   **Switch**: _A switch operates at the data link layer and connects multiple devices within a LAN. It uses MAC addresses to forward data only to the intended device, unlike hubs, which broadcast data to all devices._

   **Hub**: _A hub is a basic networking device that broadcasts incoming data to all devices connected to it, regardless of the intended recipient. Hubs operate at the physical layer and are rarely used today due to inefficiency._

   **Bridge**: _Bridges connect two LAN segments, filtering traffic and forwarding only the data meant for devices on the other side of the bridge._

   **Gateway**: _A gateway connects networks using different protocols. For example, it can translate between IP and a non-IP protocol, allowing different systems to communicate._

   **Modem**: _A modem converts digital data into analog signals for transmission over telephone lines and vice versa. It is commonly used for connecting to the Internet._

   Each of these devices plays a specific role in ensuring that data is transmitted accurately and efficiently in a network.

5. **Define terms:  
   a. NIC  
   b. Protocols  
   c. Hardware  
   d. Software  
   e. Topology**

   a. **NIC (Network Interface Card)**: _A hardware component that allows a computer or device to connect to a network. It converts data into a format suitable for transmission over the network and manages the data transfer process. Every NIC has a unique MAC address._

   b. **Protocols**: _Rules and conventions governing the communication between devices in a network. Protocols define how data is formatted, transmitted, and received. Examples include TCP/IP, HTTP, and FTP._

   c. **Hardware**: _The physical components of a network, including routers, switches, cables, and NICs. Hardware is essential for creating the infrastructure of a network._

   d. **Software**: _Programs or applications that manage network operations, such as network operating systems or monitoring tools like Wireshark. Software ensures that devices can communicate and function correctly._

   e. **Topology**: _The physical or logical arrangement of devices in a network. Common network topologies include bus, star, and mesh topologies. The choice of topology affects network performance and scalability._

6. **What is cable? Note different types of cable’s applications.**  
   _A cable is a transmission medium used to carry electrical or optical signals in a network. There are several types of cables used depending on the distance, bandwidth, and purpose of the network._

   **Coaxial Cable**: _Used for cable television and older Ethernet networks. It consists of a central copper conductor surrounded by insulation and shielding. Coaxial cables are resistant to interference and are often used for long-distance transmission in traditional TV setups._

   **Twisted Pair Cable**: _This is the most common type of cable used in LANs. It has two insulated copper wires twisted together to reduce interference. It comes in two varieties:_

   **UTP (Unshielded Twisted Pair)**: _Commonly used for telephone lines and Ethernet networks._

   **STP (Shielded Twisted Pair)**: _Offers additional shielding for protection from interference and is used in industrial environments._

   **Fiber Optic Cable**: _Uses light to transmit data, allowing for high-speed communication over long distances with minimal signal loss. Fiber optics are used in backbone networks, ISPs, and high-speed data transmission environments._

   Each cable type has its specific uses depending on the requirements of the network in terms of distance, speed, and cost.

7. **Write a note on NIC.**
   _A Network Interface Card (NIC) is a hardware component installed in a computer or other network devices to enable network communication. It provides the physical connection between the device and the network, either via Ethernet or wireless signals. NICs are responsible for:_

   **Data Conversion:** _Converting data into signals for transmission over the network and vice versa._

   **Addressing**: _Each NIC has a unique MAC address that allows the network to identify the device._

   **Error Checking**: _NICs often include built-in error checking to ensure data is transmitted correctly._

   **There are different types of NICs:**

   **Wired NIC**: _Connects to the network using Ethernet cables._

   **Wireless NIC**: _Connects to the network using wireless signals (Wi-Fi)._
   **Fiber Optic NIC**: _Used for high-speed data transfer in fiber-optic networks._

## Unit 2

1. **Differentiate between Analog and Digital Signal.**
   Feature Analog Signal Digital Signal
   Nature Continuous signal Discrete signal
   Representation Varies smoothly over time Binary values (0s and 1s)
   Transmission Susceptible to noise Less prone to noise due to regeneration
   Example Radio waves, human voice Computer data, digital video
   An analog signal represents data as a continuous wave that can vary in amplitude and frequency. It is used in radio transmissions, audio recording, and telecommunication systems. The main disadvantage of analog signals is their susceptibility to noise, which can distort the signal during transmission.

   In contrast, a digital signal represents data as binary numbers (0s and 1s), making it more resilient to noise and allowing for error correction during transmission. Digital signals are widely used in modern communication systems, including computers, digital telephony, and networking.
   
   ---
2. **Explain Error-Control techniques**.    
   *Error-control techniques are essential for ensuring accurate and reliable data transmission across a network. There are two primary approaches to handling errors:*
   **Error Detection**:

   **Parity Check**: *A parity bit is added to the data to make the number of 1s either even (even parity) or odd (odd parity). If the parity does not match upon receipt, an error is detected.* 

   **Cyclic Redundancy Check (CRC)**: *A checksum is created based on the contents of the data. The sender transmits this checksum along with the data, and the receiver recalculates the checksum to verify data integrity.*

   **Error Correction:**
   Forward Error Correction (FEC): This method involves sending redundant data so that the receiver can detect and correct errors without needing retransmission. Techniques like Hamming Code are used.
   Automatic Repeat reQuest (ARQ): When an error is detected, the receiver requests the sender to retransmit the erroneous data. ARQ is commonly used in TCP.
   Error control is critical in noisy environments like wireless networks, where transmission errors are more likely to occur.

3. What is Block coding?

   Block coding is an error detection and correction method used in digital communication to ensure data integrity. The original data is divided into blocks of fixed size, and extra bits (called redundant bits) are added to the blocks to help detect and correct errors during transmission.

   For example, in Hamming Code, for every 4 bits of data, 3 redundant bits are added to make a 7-bit block. The redundant bits enable the receiver to detect errors and even correct a single-bit error without retransmission.

   Block coding ensures reliable data transfer, especially in environments prone to noise and data loss, such as wireless networks and satellite communications.

4. **Explain Piconet and Scatternet network of Bluetooth**.
   *Bluetooth technology is designed for short-range wireless communication. It uses two types of network configurations: Piconet and Scatternet.*

   *Piconet*: *A piconet is a basic Bluetooth network formed between one master device and one or more slave devices. The master controls the communication between devices, and up to 7 active devices can be connected in a piconet at any time. Multiple devices can also be in a parked state, waiting to be added to the active network.*

   *Scatternet*: *A scatternet is a more complex network that connects multiple piconets. A device in one piconet can participate in another piconet, acting as a bridge. This allows for larger and more flexible Bluetooth networks, enabling communication between a greater number of devices.*

 *  Piconets are suitable for simple, short-range connections like connecting a smartphone to a wireless headset. Scatternets are used in more complex systems where multiple Bluetooth networks need to interact.*

5. Define the followings:  
    a. Channel capacity  
    b. Data rate  
    c. Bandwidth
   d. Noise  
    e. Error rate

   a. Channel Capacity: The maximum amount of data that can be transmitted over a communication channel in a given time, typically measured in bits per second (bps).
   b. Data Rate: The speed at which data is transmitted from one device to another, measured in bits per second.
   c. Bandwidth: The range of frequencies available for data transmission in a communication channel, measured in Hertz (Hz). Higher bandwidth allows more data to be transmitted at once.
   d. Noise: Unwanted interference or fluctuations in a signal that can distort the transmitted data.
   e. Error Rate: The percentage of bits or packets that are received incorrectly during transmission.

6. What is Bluetooth? Explain its architecture.
   Bluetooth is a wireless technology standard for exchanging data over short distances using radio waves. It operates in the 2.4 GHz ISM band and is used for connecting devices like phones, headphones, and computers.

   Bluetooth Architecture:

   Piconet: The basic structure, consisting of one master and up to seven active slave devices. The master controls communication by sending data to the slaves.
   Scatternet: Multiple interconnected piconets. A device can act as a master in one piconet and a slave in another, forming a more extensive Bluetooth network.
   Bluetooth is commonly used in wireless headsets, file transfers between devices, and Internet of Things (IoT) devices.

7. Compare LEO,MEO and GEO.
   LEO (Low Earth Orbit): Satellites orbit the Earth at altitudes between 160 km and 2,000 km. They provide low-latency communication but have a limited coverage area. Examples include satellites used in GPS and some satellite phone systems.

   MEO (Medium Earth Orbit): Satellites are positioned at altitudes between 2,000 km and 35,786 km. They offer a balance between coverage area and latency, often used for communication and navigation (e.g., Galileo and some GPS satellites).

   GEO (Geostationary Earth Orbit): Satellites orbit at an altitude of about 35,786 km, remaining fixed relative to a point on Earth. They provide extensive coverage, especially for satellite TV and weather monitoring. However, their high altitude introduces greater latency, making them less suitable for real-time communication.

   Each type of orbit serves different communication and coverage needs based on latency, coverage area, and cost.

## Unit 3

1. What are the duties of Network Layer? Explain any 5.
   The Network Layer (Layer 3 of the OSI model) is responsible for routing and forwarding data packets between devices on different networks. Its primary duties include:

   Logical Addressing: The network layer assigns IP addresses to devices and ensures that data is routed correctly based on these addresses. Unlike MAC addresses, IP addresses are not fixed to hardware and can be changed as needed.

   Routing: One of the primary functions of the network layer is to determine the best path for data to travel from the source to the destination. This is done using routing protocols such as OSPF (Open Shortest Path First) or BGP (Border Gateway Protocol).

   Packet Forwarding: Once the best route is determined, the network layer forwards the data packet to the next hop on its way to the destination. This may involve traversing multiple routers and networks.

   Fragmentation and Reassembly: If a data packet is too large to be transmitted over a network, the network layer splits it into smaller fragments. These fragments are reassembled into the original packet at the destination.

   Error Handling: The network layer handles errors like packet loss, timeouts, and packet corruption. Protocols like ICMP (Internet Control Message Protocol) are used to send error messages to the sender when issues occur during transmission.

   By performing these tasks, the network layer ensures that data can travel efficiently between devices across different networks.

2. Differentiate between connectionless and connection-oriented services
   In network communication, two types of services are provided: connectionless and connection-oriented.

   Connectionless Service:

   No Setup: Data is sent without establishing a connection between sender and receiver.
   Independent Packets: Each data packet is treated independently and may take different paths to reach the destination.
   Unreliable: There is no guarantee of data delivery or order, making it less reliable. Error checking and retransmission must be handled by the application.
   Example: UDP (User Datagram Protocol) is connectionless and used in applications where speed is prioritized over reliability, such as video streaming.
   Connection-Oriented Service:

   Connection Setup: A connection is established before data is transmitted. Data is sent along a defined path.
   Guaranteed Delivery: The service ensures that data is delivered in the correct order and without errors. Acknowledgments and retransmissions are used for reliability.
   Reliable: The connection is reliable and maintained until the communication is complete.
   Example: TCP (Transmission Control Protocol) is connection-oriented and used in applications like file transfers, web browsing, and emails, where reliability is crucial.

3. Make the header structure of IPv4 and explain
   The IPv4 (Internet Protocol version 4) header consists of several fields that are essential for routing and delivering data packets across a network. Below is a simplified structure of the IPv4 header:

   Field Size (bits) Description
   Version 4 Specifies the IP version (4 for IPv4).
   Header Length 4 Length of the IP header in 32-bit words.
   Type of Service 8 Indicates the priority of the packet (now known as DSCP).
   Total Length 16 The total length of the packet (header + data).
   Identification 16 Unique ID to identify packets during fragmentation.
   Flags 3 Control flags for fragmentation (e.g., Don’t Fragment).
   Fragment Offset 13 Specifies the position of the fragment in the original packet.
   Time to Live (TTL) 8 Limits the lifespan of a packet (decremented at each hop).
   Protocol 8 Specifies the higher-layer protocol (e.g., TCP = 6, UDP = 17).
   Header Checksum 16 Verifies the integrity of the IP header.
   Source IP Address 32 The IP address of the sender.
   Destination IP Address 32 The IP address of the recipient.
   Options (optional) Variable Additional options (e.g., for debugging, security).
   The IPv4 header enables routers to correctly forward packets from the source to the destination across different networks.

4. Differentiate between IPv4 and IPv6
   Feature IPv4 IPv6
   Address Size 32 bits (4 bytes) 128 bits (16 bytes)
   Number of Addresses ~4.3 billion addresses Virtually unlimited addresses
   Header Complexity More complex due to fragmentation Simpler with fixed-length headers
   Address Notation Dotted decimal (e.g., 192.168.1.1) Hexadecimal (e.g., 2001:0db8::ff00:0042:8329)
   Security Security is optional via IPsec IPsec is mandatory
   Fragmentation Handled by routers Only handled by the sender
   Broadcast Support Supports broadcasting No broadcast, but supports multicast
   IPv6 was introduced to address the limitations of IPv4, such as the shortage of IP addresses and more efficient routing.

5. Define the followings
   a. Physical Address: Also known as the MAC address, this is a hardware address assigned to a network interface card (NIC). It uniquely identifies a device within a local network.
   b. Static Address: An IP address that is manually assigned to a device and does not change unless reconfigured. It is typically used for servers and devices requiring consistent identification.
   c. Configurable Address: A network address that can be assigned manually (static) or automatically (dynamic) based on network configuration settings.
   d. Dynamic Address: An IP address assigned automatically by a DHCP (Dynamic Host Configuration Protocol) server. The address can change over time.
   e. Logical Address: This refers to an IP address, which is used at the network layer to uniquely identify a device across different networks. It is not tied to the hardware and can be reassigned as needed.

6. Write a note on ICMPv4
   ICMPv4 (Internet Control Message Protocol for IPv4) is a protocol used by devices like routers and hosts to send error messages and operational information about the state of the network. ICMP is primarily used for diagnostic purposes, such as checking if a particular device is reachable or determining why a packet failed to reach its destination.

   Common ICMP messages include:

   Echo Request/Reply: Used by the ping command to test the reachability of a host.
   Destination Unreachable: Sent when a packet cannot be delivered to its destination due to network issues.
   Time Exceeded: Sent when the packet’s TTL (Time to Live) value reaches zero before reaching its destination, indicating that the packet was in transit for too long.
   Redirect: Informs a host that a better route exists for sending packets to a particular destination.
   ICMPv4 helps improve network performance by detecting issues like unreachable hosts, network congestion, and routing loops.

7. Explain the following protocols at the Network Layer
   a. IP (Internet Protocol): The core protocol for routing and addressing data packets across networks. IP ensures that packets are delivered from the source to the destination using logical addressing (IP addresses).
   b. ARP (Address Resolution Protocol): A protocol used to map a logical (IP) address to a physical (MAC) address. It is essential for devices within the same network to communicate.
   c. RARP (Reverse Address Resolution Protocol): A protocol used by a host to discover its IP address using its MAC address. It is less commonly used today, having been replaced by DHCP.
   d. ICMP (Internet Control Message Protocol): A supporting protocol used for error reporting and diagnostics in the IP suite. It helps identify network issues like unreachable hosts or network congestion.
   e. IGMP (Internet Group Management Protocol): A protocol used to manage multicast groups, allowing a single message to be sent to multiple recipients efficiently.

## Unit 4

1. What are the different responsibilities of Transport Layer?
   The Transport Layer (Layer 4 of the OSI model) ensures reliable data transfer between two devices over a network. Its main responsibilities include:

   Segmentation and Reassembly: The transport layer breaks large messages into smaller segments for transmission and reassembles them at the destination.

   Flow Control: Regulates the amount of data sent by the sender to prevent overwhelming the receiver. For example, TCP’s sliding window mechanism dynamically adjusts the data flow based on network conditions.

   Error Control: Ensures that data is delivered without errors. TCP uses checksums to detect corrupted segments and requests retransmission if errors are detected.

   Connection Establishment and Termination: TCP establishes a connection between the sender and receiver before data transfer and terminates the connection after all data is transferred. This process is done using a three-way handshake (SYN, SYN-ACK, ACK).

   Multiplexing: The transport layer allows multiple applications to use the same network connection. It achieves this using port numbers, which uniquely identify different applications on a device (e.g., HTTP on port 80, FTP on port 21).

   The transport layer ensures that data is transferred reliably and efficiently between devices.

2. Define Socket Address with example . Discuss the process of encapsulation and decapsulation.  
   A socket address is the combination of an IP address and a port number. It uniquely identifies a specific process or application running on a device within a network. For example, a web server running on a computer with IP address 192.168.1.10 and using port 80 (the default port for HTTP) would have the socket address 192.168.1.10:80.

   Encapsulation: Encapsulation is the process of adding headers and trailers to data as it moves down the layers of the OSI model. For example, at the transport layer, data is segmented and encapsulated with a TCP or UDP header. At the network layer, an IP header is added, and finally, at the data link layer, a frame header (with MAC addresses) and a trailer are added before transmission.

   Decapsulation: When the data reaches the destination, decapsulation occurs. The headers and trailers are stripped off layer by layer, from the physical layer up to the application layer, until the original message is retrieved and delivered to the appropriate application.

3. What is UDP? Explain the format of user datagram. 4. Define: a. Client b. Server c. Port number
   a. Client: A device or software application that requests services or resources from a server. For example, a web browser acts as a client when it requests a web page from a web server.

   b. Server: A device or software application that provides services or resources to clients. Servers respond to client requests, providing data or resources such as web pages, files, or database information.

   c. Port Number: A port number is a 16-bit number used to identify specific processes or services on a device. It allows multiple services (e.g., web server, email server) to run simultaneously on the same machine. For example, HTTP typically uses port 80, and HTTPS uses port 443.

4. Differentiate between TCP & UDP.
   Feature TCP (Transmission Control Protocol) UDP (User Datagram Protocol)
   Connection Connection-oriented (requires connection setup) Connectionless (no connection setup)
   Reliability Reliable, ensures ordered and error-free data delivery Unreliable, no guarantee of data delivery
   Flow Control Uses flow control to manage data transmission rate No flow control
   Speed Slower due to overhead in ensuring reliability Faster due to minimal overhead
   Usage Suitable for applications requiring accuracy (e.g., web, file transfer) Suitable for real-time applications (e.g., video streaming, VoIP)

5. Explain TCP.

   TCP (Transmission Control Protocol) is a connection-oriented protocol that ensures the reliable transmission of data. It operates at the transport layer and provides features such as error checking, flow control, and congestion control. Before data is transmitted, TCP establishes a connection through a process called the three-way handshake (SYN, SYN-ACK, ACK).

   Key Features:

   Segmentation: Data is divided into segments before transmission.
   Error Control: TCP checks for errors in transmitted data using checksums and requests retransmission of corrupted segments.
   Flow Control: TCP adjusts the transmission rate using a sliding window mechanism to prevent buffer overflow.
   Reliable Data Transfer: Acknowledgments ensure that the receiver confirms the receipt of each segment.

6. Explain the services provided by User Datagram Protocol (UDP).
   UDP provides the following services:

   Minimal Overhead: UDP adds minimal protocol control information to the data, making it efficient for high-speed applications.
   Connectionless Service: It sends data without establishing a connection, which reduces delay.
   No Flow Control: UDP does not regulate the rate at which data is sent, making it suitable for time-sensitive applications.
   Broadcasting and Multicasting: UDP supports broadcasting (sending data to all devices in a network) and multicasting (sending data to multiple devices at once).
   UDP is ideal for applications where fast transmission is more important than reliability, such as video conferencing and real-time multiplayer games.

## Unit 5

1. Write a note on Application Layer of an OSI Model.    
   The Application Layer is the seventh layer of the OSI (Open Systems Interconnection) model, which is a conceptual framework used to understand network communications. This layer is critical because it serves as the interface between end-user applications and the underlying network services. Here’s an overview of its key characteristics, functions, and protocols:

   Key Characteristics
   User Interface: The Application Layer provides the means for users to interact with the network through software applications. It handles high-level protocols, issues related to user interface, and communication services for applications.
   Protocol Independence: While it relies on the lower layers of the OSI model, the Application Layer itself is protocol-independent. This means it can support a variety of protocols and services.
   Functions
   Data Communication: The Application Layer enables communication between applications running on different devices in a network. It encapsulates data for transmission and ensures it is delivered to the correct application.

   Service Advertisement: It can advertise available services and help clients discover them. For instance, when a client application seeks a server to connect to, the Application Layer facilitates this process.

   Session Management: The layer manages the establishment, maintenance, and termination of connections between applications. It can handle multiple sessions simultaneously.

   Data Format Translation: It can provide data translation services, converting data formats between different applications to ensure compatibility.

   Error Handling: The Application Layer can implement mechanisms for error detection and correction, ensuring that any issues encountered during communication are addressed.

   Common Protocols
   The Application Layer uses a variety of protocols to facilitate communication. Some of the most common include:

   HTTP (Hypertext Transfer Protocol): Used for transferring web pages and other content on the internet.
   FTP (File Transfer Protocol): Enables file transfer between computers on a network.
   SMTP (Simple Mail Transfer Protocol): Responsible for sending and receiving email.
   DNS (Domain Name System): Translates domain names into IP addresses, allowing users to access websites using human-readable names instead of numeric addresses.
   Telnet: A protocol for text-based communication over the internet.
   Examples of Application Layer Interactions
   Web Browsing: When a user enters a URL in a browser, the Application Layer processes this request using HTTP, allowing the browser to fetch the desired web page.
   Email Communication: Email clients use SMTP for sending messages and IMAP/POP for retrieving messages from the server.
   File Sharing: Applications like Dropbox or Google Drive use FTP-like protocols to enable file sharing and synchronization

2. Explain any 2 protocols of Application Layer.
   HTTP (Hypertext Transfer Protocol):
   HTTP is the protocol used for transmitting web pages on the World Wide Web. It operates on a client-server model, where the client (typically a web browser) sends a request to the server, and the server responds with the requested web content. HTTP is stateless, meaning each request-response pair is independent.

   FTP (File Transfer Protocol):
   FTP is a protocol used for transferring files between a client and a server over a network. It provides a simple way to upload and download files, with two modes of data transfer: active and passive. FTP allows authentication using a username and password but can also support anonymous access.

3. Write a note on: HTML.
   HTML (Hypertext Markup Language) is the standard language for creating web pages. It uses a system of tags to define the structure and layout of content on a webpage. HTML elements, like for paragraphs or for links, dictate how content is displayed in a web browser. HTML is essential for web development and forms the backbone of all websites.

4. Make the Message format of an electronic mail (E-Mail). Ans:
   The format of an email message includes several components:

   Header: Contains the sender's and receiver's email addresses, the subject line, and the timestamp.
   From: The sender's email address.
   To: The recipient's email address.
   Subject: A brief summary of the email content.
   Date: The time the email was sent.
   Body: The main content of the email, which may include text, images, and attachments.
   Attachments: Optional files sent along with the email.

5. Write the description of Generic domain lables :
   aero,com,coop,edu,gov,int,mil,net,org
   Ans:
   The following are some common generic domain labels:

   .aero: Reserved for the air transport industry.  
   .com: Used for commercial businesses and is the most widely used domain.  
   .coop: For cooperative associations.  
   .edu: Restricted to educational institutions.  
   .gov: Reserved for government entities.  
   .int: Used for international organizations established by treaty.  
   .mil: Used by the U.S. military.  
   .net: Originally intended for network infrastructure organizations, now open for general use.
