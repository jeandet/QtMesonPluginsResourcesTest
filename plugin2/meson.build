

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


#resource_files = qt5.preprocess(qresources:'resources.qrc')
resource_files = rcc_gen.process(qresources:'resources.qrc')

moc_files = moc_gen.process('plugin.h')

plugin1 = library('plugin2',
                       ['plugin.cpp'],
                       moc_files,
                       resource_files,
                       include_directories : [plugin_interface_inc],
                       dependencies : [qt5core],
                       install : true
                       )
