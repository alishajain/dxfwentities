dxfwentities
============

It runs for only libdxfrw0.5.7 library.
This code takes up the text file which contains the information about the entities to be drawn and there parameters creates the corresponding dxf files. Point, line, rectangle and circle are implemented.

Compile the entities.pro file by running following commands:
qmake entities.pro

make

./entities


Instructions to install libdxf0.5.7 :
Download it from cznic.dl.sourceforge.net/project/libdxfrw/libdxfrw-0.5.7.tar.bz2
Go to the specific folder and run the following commands :

./configure

make

sudo make install
