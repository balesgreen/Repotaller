echo ""
echo "Corringindo e instalando mirrors no sistema."
echo "Primeiro, entre em root e execute novamente."
echo ""

echo "Atualizando repositórios e arrumando erros."
echo ""
sudo apt update && sudo apt upgrade
sudo apt-get update && sudo apt-get upgrade
sudo apt update --fix-broken && sudo apt-get update --fix-broken
echo ""
