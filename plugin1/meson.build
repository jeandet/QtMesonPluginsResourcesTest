qt5 = import('qt5')

moc_gen = generator(moc,
                output  : 'moc_@BASENAME@.cpp',
                arguments : ['@INPUT@',
                 '-I', meson.current_source_dir()+'/../pluginInterface',
                 '-o', '@OUTPUT@'])

rcc_gen = generator(rcc,
                output  : 'qrc_@BASENAME@.cpp',
                arguments : ['--name=@BASENAME@"',
                 '--output',
                 '@OUTPUT@',
                 '@INPUT@'])

#resource_files = rcc_gen.process('resources1.qrc')
resource_files = qt5.preprocess(qresources:'resources1.qrc')

moc_files = moc_gen.process('plugin.h')

plugin1 = library('plugin1',
                       ['plugin.cpp'],
                       moc_files,
                       resource_files,
                       include_directories : [plugin_interface_inc],
                       dependencies : [qt5core],
                       install : true
                       )
