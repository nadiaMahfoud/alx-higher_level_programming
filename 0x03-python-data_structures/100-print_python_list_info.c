#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python_list_info - prints some basic info about Python lists.
 * @p: address of pyobject struct
 */
void print_python_list_info(PyObject *p)
{
	int i;
	long int size = PyList_Size(p);

	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0; i < size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
}
