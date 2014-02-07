## UW Workshop Feb 7, 2014

The workshop will provide an open forum for questions and is intended for moderate to advanced users of ADMB. 
If you cannot compile your own code on your computer, this is probably not for you.

---
###Topics

* New init_bounded_number(dvector)
* New init_bounded_number_vector(dmatrix)
* Writing classes for ADMB
* Template Functions
* Version control
	* Git
	* GitHub
	* Gists
* Other topics of interest
---


####Control file

In the latest version of ADMB source code we have overloaded the init_bounded_number and the init_bounded_number_vector classes to accept a vector of inputs for setting the lower bounds, upper bounds and phase of estimation based on dvector and dmatrix inputs from a control file.

