Gem::Specification.new do |s|
  s.name    = "old_string_hash"
  s.version = "0.1.0"
  s.summary = "Old Ruby String hash"
  s.author  = "Surendra Singhi"
  
  s.files = Dir.glob("ext/**/*.{c,rb}") +
            Dir.glob("lib/**/*.rb")

  s.require_paths = ["lib"]  
  s.extensions << "ext/old_string_hash/extconf.rb"
  
  s.add_development_dependency "rake-compiler"
end
