chmod 700 ai_help/keygen.sh
chmod 700 ai_help/unifier.sh
./ai_help/keygen.sh
cd key
rm file*
cd ..
./ai_help/unifier.sh
mv main.key ai_help/
mv key ai_help/
