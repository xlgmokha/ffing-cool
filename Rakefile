task :default => :build

task :clean do
  sh 'rm -f *.so'
end

desc 'build libgreeting.so'
task :build => :clean do
  sh 'gcc -shared -o libgreeting.so -fPIC greeting.c'
end

desc 'run the example'
task :run => :build do
  sh 'LD_LIBRARY_PATH=. ruby greeting.rb'
end
