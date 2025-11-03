import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false, // hides the debug banner
      home: Scaffold(
        appBar: AppBar(
          title: const Text("My First Flutter App"),
          centerTitle: true,
        ),
        body: const Center(
          child: Text(
            "Hello, Flutter!",
            style: TextStyle(fontSize: 24, fontWeight: FontWeight.bold),
          ),
        ),
      ),
    );
  }
}
