# CS3 Notebooks

# CS3 - Introduction to Algorithms using C++
- based on OpenDSA: CS3 Data Structures and Algorithms: https://opendsa-server.cs.vt.edu/ODSA/Books/CS3/html/

## View the notebooks online at [nbviewer.jupyter.org](https://nbviewer.jupyter.org/github/rambasnet/CS3Notebooks/tree/master/)
- github itself renders notebooks most of the time but not reliable and some contents may not render correctly
- click the above link or go to nbviewer.jupyter.org and copy pase this github repo URL
- NOTE: You can only read text and code but not execute it online
- see instructions below to run these notebooks (C++ code) on your system

## Run C++ Code in Notebooks
### Requirements
- Jupyter Notebook
- xeus-cling Notebook Kernel (C++ interpreter)

## Install required tools
### Linux/Mac
- Download and install Miniconda: https://conda.io/miniconda.html 
- download Miniconda3...sh shell script installer file
- open a terminal cd into the directory where the file was downloaded
- run the shell script installer file
    ``` 
    $ bash Miniconda3.....sh
    ```
- go through installation process; default works great on every prompt
- once conda is installed; use conda to install the following pacakages
- you have to close and start a new terminal to run freshly installed conda
```
$ conda install notebook
$ conda install -c conda-forge xeus-cling
$ conda install -c conda-forge jupyter_contrib_nbextensions
$ conda install -c conda-forge jupyter_nbextensions_configurator
$ jupyter nbextensions_configurator enable --user
```
    
### Windows
- On Windows, follow the instruction here: https://github.com/QuantStack/xeus-cling
to install xeus-cling
- NOTE: C++ compiler is experimental on Windows, you can enable and use WSL (Ubuntu) on Windows 10


## Run notebooks
- open a terminal and cd into this cloned/downloaded repository folder and run jupyter notebook
```
    $ cd <cs3notebooks folder>
    $ jupyter notebook
```
- start from 00-Introduction.ipynb chapter