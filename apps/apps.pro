# apps/apps.pro --
#
# Initial software
# Authors: Nicolas Roussel
# Copyright © Inria

TEMPLATE = subdirs

SUBDIRS += consoleExample glutExample qtExample

windows {
    SUBDIRS += transferFunctionEditor
}

macx {
  SUBDIRS += controlMouse
}
