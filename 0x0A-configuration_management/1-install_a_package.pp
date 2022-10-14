# Installs flask from pip3

package { 'flask':
  ensure   => 'flask-2.1.0',
  provider => 'pip3',
  name     => 'flask',
}
