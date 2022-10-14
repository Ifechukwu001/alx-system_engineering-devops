# Executes a command in the shell

exec { 'killmenow':
  command => 'pkill -f killmenow',
  path    => '/bin:/usr/bin',
}
