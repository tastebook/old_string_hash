# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'
extension_name = 'old_string_hash'
dir_config(extension_name)
create_makefile(extension_name)
