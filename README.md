# Copy Project

[![N|Solid](https://cldup.com/dTxpPi9lDf.thumb.png)](https://nodesource.com/products/nsolid)

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)


This repository was created as a example to explain how to create a new process in Linux


## Clone Project

```bash
$ git clone https://github.com/MichaelBittencourt/creatingProcessLinuxExample.git
$ cd creatingProcessLinuxExample
```

## Running

```bash
$ make
$ ./process
```

## See System Call in Stack Trace

With command `strace` on Ubuntu 20.04, you can check the stack trace of a program execution and check all system call used.

```bash
$ strace ./process
```

## Build Binary to check `exec` function behaviour

```bash
$ make DEFINES=-DEXEC_TEST
```

## Build Binary to check Simple test of `fork` function

```bash
$ make DEFINES=-DSIMPLE_TEST
```

## Build Binary to check a result when run a fork

```bash
$ make DEFINES=-DRESULT_TEST
```

## Create debug binary

```bash
$ make debug
```

## Cleaning

```bash
$ make clean
```

## Create pre-processed C files

```bash
$ make pre_processor
```

## Create assembly files

This option create a folder with assembly files

```bash
$ make assembly
```

## Show Help make menu

```bash
$ make help
```

## [OBS]

- You can combine the build options `make pre_processor assembly debug`
- Please, try test combinations and check target files
- Check source files
- Ask any question about the exercise
- To access `drawioGraphicVisualization.xml` please open [drawIO](https://app.diagrams.net/) and load this file from `Device` option

# Next Exercises

- [Check the first Makefile Exercise](https://github.com/MichaelBittencourt/MakefileExamples)
- [Check the Copy file project](https://github.com/MichaelBittencourt/copy_file)
- [Create a simple program that use fork function to create another process](https://www.geeksforgeeks.org/fork-system-call/).
- [Try the method execv and its variations](https://www.qnx.com/developers/docs/6.5.0SP1.update/com.qnx.doc.neutrino_lib_ref/e/execv.html).
