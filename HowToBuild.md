# Installing malva #

## Software requirements ##

  * MPICH-2 or MPICH-3

## Compiling the malva library ##

  * Checkout malva source code: **`svn checkout https://malva.googlecode.com/svn/trunk/ malva`**

  * Edit the **`malva/environments`** file.
    * Set the full path to the malva source code in **`MALLBA_DIR`**
    * Set the full path to the mpich binaries in **`MPI_BIN`**
  * Execute **`make libs`**
    * This command will generate the **`MALLBA`** binary in **`MALLBA_DIR/lib`**
    * The command **`make all`** will **fail** since not all the metaheuristics were upgraded from the old MALLBA code

## Testing an algorithm ##

The new fully-functional algorithms are available at **`MALLBA_DIR`/rep\_new**. While the original (old) algorithms are available at **`MALLBA_DIR`/rep**.

The only new fully-functional algorithms are the **newGA** and the **CHC**.

In order to test the ONE-MAX problem with either the **newGA** or the **CHC**, do the following:

  * Change directory to **`MALLBA_DIR/rep_new/CHC`** or **`MALLBA_DIR/rep_new/newGA`**
  * Execute **`make`** to build the executables
  * Execute **`make SEQ`** in order to execute the sequential version
  * Execute **`make LAN`** in order to execute the parallel version