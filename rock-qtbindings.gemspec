require File.expand_path('lib/qtbindings_version', __dir__)

spec = Gem::Specification.new do |s|
  s.authors = ['Sylvain Joyeux', 'Ryan Melton', 'Jason Thomas', 'Richard Dale', 'Arno Rehn']
  s.email = 'sylvain.joyeux@tidewise.io'
  s.summary = "Qt bindings for ruby"
  s.homepage = "http://github.com/rock-core/qtbindings"
  s.name = 'rock-qtbindings'
  s.version = QTBINDINGS_VERSION
  s.requirements << 'none'
  s.require_path = 'lib'
  s.files = Dir['lib/**/*', 'bin/**/*', 'ext/**/*', '*.txt', 'extconf.rb', '*.gemspec', 'Rakefile'].to_a
  s.extensions = ['extconf.rb']
  s.executables = ['rbrcc', 'rbuic4', 'rbqtapi']
  s.description = 'qtbindings provides ruby bindings to QT4.x. It is derived from the kdebindings project.'
  s.licenses = ['LGPL-2.1']
end
