For each example, state whether it may compile or not. If yes, is the program
behaviour defined? If yes, what would be the output.
Shortly explain every answer.

a) It will compile, but the value of variable num is undefined.
We are accessing and displaying value of global variable num inside the
unnamed namespace. Since there is a "using" directive in unnamed namespace, 
global variable is searched for in unnamed namespace and in the namespace 
coming after using directive. The latter namespace is B nested in namespace A. 
Since namespace AB is nested in unnamed namespace, value of num
from namespace B is accessed. That variable is undefined, thus its value
remains arbitrary.

b) Since we have using directives for both namespaces A and B inside
the unnamed namespace, reference to variable x is ambigous.
Variable is searched for in unnamed namespace, namespace A and namespace B.
Compiler doesn't know which variable x we want to access.
