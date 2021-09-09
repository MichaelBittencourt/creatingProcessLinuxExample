#!/bin/bash

function myShell() {
    local command=""
    while true
    do
        echo -n "$(pwd)> "
        read -r command
        $command
    done
}

myShell $@
