# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: standard_cyborg/proto/sc3d/polygon_label.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from standard_cyborg.proto.math import core_pb2 as standard__cyborg_dot_proto_dot_math_dot_core__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='standard_cyborg/proto/sc3d/polygon_label.proto',
  package='standard_cyborg.proto.sc3d',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=b'\n.standard_cyborg/proto/sc3d/polygon_label.proto\x12\x1astandard_cyborg.proto.sc3d\x1a%standard_cyborg/proto/math/core.proto\"\x9b\x01\n\x0cPolygonLabel\x12H\n\x0bsubPolygons\x18\x02 \x03(\x0b\x32\x33.standard_cyborg.proto.sc3d.PolygonLabel.SubPolygon\x1a\x41\n\nSubPolygon\x12\x33\n\tpositions\x18\x01 \x03(\x0b\x32 .standard_cyborg.proto.math.Vec2b\x06proto3'
  ,
  dependencies=[standard__cyborg_dot_proto_dot_math_dot_core__pb2.DESCRIPTOR,])




_POLYGONLABEL_SUBPOLYGON = _descriptor.Descriptor(
  name='SubPolygon',
  full_name='standard_cyborg.proto.sc3d.PolygonLabel.SubPolygon',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='positions', full_name='standard_cyborg.proto.sc3d.PolygonLabel.SubPolygon.positions', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=208,
  serialized_end=273,
)

_POLYGONLABEL = _descriptor.Descriptor(
  name='PolygonLabel',
  full_name='standard_cyborg.proto.sc3d.PolygonLabel',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='subPolygons', full_name='standard_cyborg.proto.sc3d.PolygonLabel.subPolygons', index=0,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_POLYGONLABEL_SUBPOLYGON, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=118,
  serialized_end=273,
)

_POLYGONLABEL_SUBPOLYGON.fields_by_name['positions'].message_type = standard__cyborg_dot_proto_dot_math_dot_core__pb2._VEC2
_POLYGONLABEL_SUBPOLYGON.containing_type = _POLYGONLABEL
_POLYGONLABEL.fields_by_name['subPolygons'].message_type = _POLYGONLABEL_SUBPOLYGON
DESCRIPTOR.message_types_by_name['PolygonLabel'] = _POLYGONLABEL
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PolygonLabel = _reflection.GeneratedProtocolMessageType('PolygonLabel', (_message.Message,), {

  'SubPolygon' : _reflection.GeneratedProtocolMessageType('SubPolygon', (_message.Message,), {
    'DESCRIPTOR' : _POLYGONLABEL_SUBPOLYGON,
    '__module__' : 'standard_cyborg.proto.sc3d.polygon_label_pb2'
    # @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.PolygonLabel.SubPolygon)
    })
  ,
  'DESCRIPTOR' : _POLYGONLABEL,
  '__module__' : 'standard_cyborg.proto.sc3d.polygon_label_pb2'
  # @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.PolygonLabel)
  })
_sym_db.RegisterMessage(PolygonLabel)
_sym_db.RegisterMessage(PolygonLabel.SubPolygon)


# @@protoc_insertion_point(module_scope)
