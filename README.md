# Domus
A full implementation of Domus IoT protocol.

## Overview

Domus is a project to build and implement an IoT protocol.

## Philosophy and motivation

Domus is a protocol for applications, something like tcp/ip for the Internet.

Domus protocol it's not limited to do certain functions/commands, but it also
possible to write and upload code(or data) to the network, this code can be executed(and/or stored) by
all nodes of the network (ie. to parellelize tasks) or by certain nodes.

In that way a Domus network is able to escale and do more and more things without requiring any software update.
The main philosophy is to keep the nodes of the network busy in order to reduce the server bottleneck as much as possible.

### Examples:

If we want to obtain the average of 20 temperature sensors, we can send that work to an individual temperature sensor of the network providing the code to
do that task, because the server have enough work keeping track of every device on the network and routing messages between them.
