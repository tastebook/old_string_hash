require 'rake/extensiontask'
spec = Gem::Specification.load('old_string_hash.gemspec')

# add your default gem packing task
Gem::PackageTask.new(spec) do |pkg|
end

Rake::ExtensionTask.new('old_string_hash', spec)
