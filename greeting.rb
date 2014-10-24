require 'ffi'

class Greeting
  extend FFI::Library
  ffi_lib 'greeting'
  attach_function :greet, [:string], :string
end

puts Greeting.greet('mo')
