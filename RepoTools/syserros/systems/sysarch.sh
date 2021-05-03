echo ""
echo "Corringindo e instalando mirrors no sistema."
echo "Primeiro, entre em root e execute novamente."
echo ""
pacman-mirrors -g

echo ""
echo "Atualizando repositórios"
echo ""
pacman -Syy
pacman -Suu

echo ""
echo "Atualizando informações do Kernel e Headers."
echo ""
pacman -S linux59-headers

cd .. && ./syserros 