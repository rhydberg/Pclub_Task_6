<center><h1>Weird Forest</h1></center><br>
<center>time limit per test:2secs</center><br>
<center>memory limit per test:256MB</center><br>
<center>input: standard input</center><br>
<center>output: standard output</center><br>
<br>
Praneat is stuck in the center of a very strange forest. This forest is square in shape and is made up of <em>n x n</em> points arranged like a 2D lattice. There is a tree on every lattice point except for the center. (Praneat is standing in the center). Hence there are a total of <em>n x n - 1</em> trees.<br>
The trees are very thin and opaque. Praneat has very good eyesight and can see as far as required as long as his vision is not obstructed by a tree. Praneat wants to calculate the number of trees he can see given n. 
<br>
Since the output may be large, output the answer modulo <em>1E9+7</em>
<br>
 Note: n will always be an odd number.
 <br>
<strong>Input</strong>
<br>
Only one odd positive integer <strong>n</strong> (n < 10^5)
<br>
<strong>Output</strong>
<br>
A single integer denoting the number of trees that Praneat can see.
<br><br>
<strong>Example</strong>
<br>
<em>Input</em>
<br>
7
<br>
<em>Output</em>
<br>	
32
<br>
<em>Explanation</em>
<br>
The forest will look like this:
<br>
T <strong>T T </strong>T <strong>T T</strong> T<br>
<strong>T</strong> T <strong>T</strong> T <strong>T</strong> T <strong>T</strong><br>
<strong>T T T T T T T</strong><br>
T T <strong>T</strong> P <strong>T</strong> T T <br>
<strong>T T T T T T T</strong><br>
<strong>T</strong> T <strong>T</strong> T <strong>T</strong> T <strong>T</strong><br>
T <strong>T T </strong>T <strong>T T</strong> T<br>
<br>
Each T represents a tree. The trees that Praneat can see are in bold i.e <strong>T</strong>. Praneat is denoted by P.
