
function verificarLetraA(str) {
    let quantidade = (str.match(/a/gi) || []).length;

    if (quantidade > 0) {
        console.log(`A letra 'a' foi encontrada ${quantidade} vezes na string ${str} .`);
    } else {
        console.log("A letra 'a' não foi encontrada na string.");
    }
}

verificarLetraA("Panelada de macarraos!");