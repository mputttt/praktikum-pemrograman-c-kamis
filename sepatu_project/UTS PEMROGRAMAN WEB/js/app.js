// Data produk sepatu
const products = [
    { id: 1, name: "Sepatu Sneakers", price: 500000, image: "https://images.unsplash.com/photo-1520256862855-398228c41684?w=300&h=200&fit=crop" },
    { id: 2, name: "Sepatu Boots", price: 750000, image: "https://images.unsplash.com/photo-1606107557195-0e29a4b5b4aa?w=300&h=200&fit=crop" },
    { id: 3, name: "Sepatu Pantofel", price: 600000, image: "https://images.unsplash.com/photo-1549298916-b41d501d3772?w=300&h=200&fit=crop" },
    { id: 4, name: "Sepatu Running", price: 450000, image: "https://images.unsplash.com/photo-1542291026-7eec264c27ff?w=300&h=200&fit=crop" },
    { id: 5, name: "Sepatu Casual", price: 400000, image: "https://images.unsplash.com/photo-1525966222134-fcfa99b8ae77?w=300&h=200&fit=crop" },
    { id: 6, name: "Sepatu Sandal", price: 200000, image: "https://images.unsplash.com/photo-1608231387042-66d1773070a5?w=300&h=200&fit=crop" }
];

// Inisialisasi keranjang dari localStorage
let cart = JSON.parse(localStorage.getItem("cart")) || {};

function renderProducts() {
    const list = document.getElementById("product-list");
    if (!list) return;
    list.innerHTML = products.map(p => `
        <div class="card">
            <img src="${p.image}" alt="${p.name}" style="width: 100%; height: 150px; object-fit: cover; border-radius: 10px; margin-bottom: 10px;">
            <h3>${p.name}</h3>
            <p>Rp ${p.price.toLocaleString()}</p>
            <button onclick="addToCart(${p.id})" class="btn">Tambah</button>
        </div>
    `).join('');
}

function addToCart(id) {
    if (!cart[id]) cart[id] = { qty: 1 };
    else cart[id].qty++;
    saveCart();
    renderCart();
    renderCheckout();
}

function renderCart() {
    const area = document.getElementById("cart");
    if (!area) return;
    area.innerHTML = Object.keys(cart).map(id => {
        const p = products.find(x => x.id == id);
        return `
            <div class="card">
                <img src="${p.image}" alt="${p.name}" style="width: 100%; height: 150px; object-fit: cover; border-radius: 10px; margin-bottom: 10px;">
                <h3>${p.name}</h3>
                <p>Rp ${p.price.toLocaleString()}</p>
                <p>Qty: <input type="number" value="${cart[id].qty}" min="1" onchange="changeQty(${id}, this.value)"></p>
            </div>
        `;
    }).join('');
}

function changeQty(id, qty) {
    qty = parseInt(qty);
    if (qty <= 0) delete cart[id];
    else cart[id].qty = qty;
    saveCart();
    renderCart();
    renderCheckout();
}

function updateCart() {
    saveCart();
    renderCart();
    renderCheckout();
}

function renderCheckout() {
    const area = document.getElementById("checkout-total");
    if (!area) return;
    const total = Object.keys(cart).reduce((sum, id) => {
        const p = products.find(x => x.id == id);
        return sum + (cart[id].qty * p.price);
    }, 0);
    area.innerHTML = `<h2>Total Pembayaran: Rp ${total.toLocaleString()}</h2>`;
}

function saveCart() {
    localStorage.setItem("cart", JSON.stringify(cart));
}

function payNow() {
    if (Object.keys(cart).length === 0) {
        alert("Keranjang kosong. Tambahkan produk terlebih dahulu.");
        return;
    }
    alert("Barang Anda sudah dibayar! Terima kasih telah berbelanja.");
    cart = {};
    saveCart();
    renderCart();
    renderCheckout();
}

// Render halaman
renderProducts();
renderCart();
renderCheckout();
