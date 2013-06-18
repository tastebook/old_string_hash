// Include the Ruby headers and goodies
#include <ruby.h>
#include <stdio.h>

// Defining a space for information and references about the module to be stored internally
VALUE OldStringHash = Qnil;

// Prototype for the initialization method - Ruby calls this, not you
void Init_old_string_hash();

// Prototype for our method 'hash_code' - methods are prefixed by 'method_' here
VALUE method_hash_code(VALUE self, VALUE str);

// The initialization method for this module
void Init_old_string_hash() {
  printf("here");
  OldStringHash = rb_define_module("OldStringHash");
  rb_define_method(OldStringHash, "hash_code", method_hash_code, 1); 
}

// Our 'test1' method.. it simply returns a value of '10' for now.
VALUE method_hash_code(VALUE self, VALUE str) {
  register int key = 0;
  register long len = RSTRING_LEN(str);
  register char *p = RSTRING_PTR(str);
  
  while (len--) {
    key = key*65599 + *p;
    p++;
  }
  key = key + (key>>5);
  return INT2FIX(key);
}
