projectuas_sources = [
  'main.vala',
  'application.vala',
  'login.vala',
  'forum.vala',
  'create.vala',
  'register.vala'
]

projectuas_deps = [
  dependency('gtk4'),
  dependency('libsoup-2.4'),
]

gnome = import('gnome')

projectuas_sources += gnome.compile_resources('projectuas-resources',
  'projectuas.gresource.xml',
  c_name: 'projectuas'
)

executable('projectuas', projectuas_sources,
  vala_args: '--target-glib=2.50',  dependencies: projectuas_deps,
  install: true,
)
