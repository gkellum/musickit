mkdir classes
javac -sourcepath src -d classes -cp lib/hsqldb.jar:lib/jsontools-core-1.7.jar:lib/antlr-3.2.jar src/Main.java src/TestDB.java
cp data/track_list.json classes
jar cf main.jar -C classes .
mv main.jar lib


