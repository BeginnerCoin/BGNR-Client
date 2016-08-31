from distutils.core import setup
setup(name='bgnrspendfrom',
      version='1.0',
      description='Command-line utility for beginnercoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@beginnercoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
