#!/bin/sh

ifconfig | grep ether | cut -d " " -f 10
<ifconfig | grep ether | awk '{print $2}'>
