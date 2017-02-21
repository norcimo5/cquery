enum Foo {
  A,
  B = 20
};

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@E@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "1:1:6",
      "vars": [0, 1],
      "uses": ["*1:1:6"]
    }],
  "functions": [],
  "variables": [{
      "id": 0,
      "usr": "c:@E@Foo@A",
      "short_name": "A",
      "qualified_name": "Foo::A",
      "definition": "1:2:3",
      "declaring_type": 0,
      "uses": ["1:2:3"]
    }, {
      "id": 1,
      "usr": "c:@E@Foo@B",
      "short_name": "B",
      "qualified_name": "Foo::B",
      "definition": "1:3:3",
      "declaring_type": 0,
      "uses": ["1:3:3"]
    }]
}
*/