# CS3 Notebooks

# CS3 - Introduction to Algorithms using C++
- based on OpenDSA: CS3 Data Structures and Algorithms: https://opendsa-server.cs.vt.edu/ODSA/Books/CS3/html/

## Requirements
- Jupyter Notebook
- xeus-cling notebook kernel

## Install required tools
- Install Miniconda: https://conda.io/miniconda.html 
- If you're installing in Linux/Unix from *.sh file, run the following command on terminal
    ``` 
    bash Miniconda3.....sh
    ```
- On Linux/Mac, open a terminal and run the following commands
- On Windows follow the instruction here: https://github.com/QuantStack/xeus-cling
to install xeus-clint
```
    $ conda install notebook
    $ conda install -c conda-forge xeus-cling
    $ conda install -c conda-forge jupyter_contrib_nbextensions
    $ conda install -c conda-forge jupyter_nbextensions_configurator
    $ jupyter nbextensions_configurator enable --user
```

## Run notebooks
- open a terminal and cd into this cloned/downloaded repository folder and run jupyter notebook
```
    $ cd <cs3notebooks folder>
    $ jupyter notebook
```
- start from 00-Introduction.ipynb chapter