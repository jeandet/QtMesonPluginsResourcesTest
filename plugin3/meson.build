qt5 = import('qt5')

moc_gen = generator(moc,
                output  : 'moc_@BASENAME@.cpp',
                arguments : ['@INPUT@',
                 '-I', meson.current_source_dir()+'/../pluginInterface',
                 '-DQT_PLUGIN',
                 '-o', '@OUTPUT@'])

rcc_gen = generator(rcc,
                output  : 'qrc_@BASENAME@.cpp',
                arguments : ['--name=@BASENAME@"',
                 '--output',
                 '@OUTPUT@',
                 '@INPUT@'])


#resource_files = rcc_gen.process(qresources:'resources3.qrc')
resource_files = qt5.preprocess(qresources:'resources3.qrc')


moc_files = moc_gen.process('plugin.h')

plugin1 = library('plugin3',
                       ['plugin.cpp'],
                       moc_files,
                       resource_files,
                       cpp_args : '-DQT_PLUGIN',
                       include_directories : [plugin_interface_inc],
                       dependencies : [qt5core],
                       install : true
                       )
