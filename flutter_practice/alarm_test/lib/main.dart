import 'package:flutter/material.dart';
import 'package:android_alarm_manager/android_alarm_manager.dart';
import 'dart:isolate';

void printHello() {
  final DateTime now = DateTime.now();
  final int isolateId = Isolate.current.hashCode;
  print("[$now] Hello, world! isolate=${isolateId} function='$printHello'");
}

void main() async {
  final int helloAlarmID = 0;
  await AndroidAlarmManager.initialize();
  WidgetsFlutterBinding.ensureInitialized();
  runApp(MyApp());
  await AndroidAlarmManager.periodic(const Duration(minutes: 1), helloAlarmID, printHello);
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return null;
  }
}