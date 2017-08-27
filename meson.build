project('Name', 'cpp',default_options : ['cpp_std=c++14'])

qt5 = import('qt5')
qt5core = dependency('qt5', modules : 'Core')

plugin_interface_inc = include_directories(['pluginInterface'])

moc = find_program('moc-qt5','moc')
rcc = find_program('rcc-qt5','rcc')

subdir('app')
subdir('plugin1')
subdir('plugin2')
subdir('plugin3')

