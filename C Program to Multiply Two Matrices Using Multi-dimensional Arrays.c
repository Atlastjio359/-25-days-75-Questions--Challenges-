#𝐢𝐧𝐜𝐥𝐮𝐝𝐞 <𝐬𝐭𝐝𝐢𝐨.𝐡>

// 𝐟𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐭𝐨 𝐠𝐞𝐭 𝐦𝐚𝐭𝐫𝐢𝐱 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐞𝐧𝐭𝐞𝐫𝐞𝐝 𝐛𝐲 𝐭𝐡𝐞 𝐮𝐬𝐞𝐫
𝐯𝐨𝐢𝐝 𝐠𝐞𝐭𝐌𝐚𝐭𝐫𝐢𝐱𝐄𝐥𝐞𝐦𝐞𝐧𝐭𝐬(𝐢𝐧𝐭 𝐦𝐚𝐭𝐫𝐢𝐱[][𝟏𝟎], 𝐢𝐧𝐭 𝐫𝐨𝐰, 𝐢𝐧𝐭 𝐜𝐨𝐥𝐮𝐦𝐧) {

   𝐩𝐫𝐢𝐧𝐭𝐟("\𝐧𝐄𝐧𝐭𝐞𝐫 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬: \𝐧");

   𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐢 = 𝟎; 𝐢 < 𝐫𝐨𝐰; ++𝐢) {
      𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐣 = 𝟎; 𝐣 < 𝐜𝐨𝐥𝐮𝐦𝐧; ++𝐣) {
         𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐧𝐭𝐞𝐫 𝐚%𝐝%𝐝: ", 𝐢 + 𝟏, 𝐣 + 𝟏);
         𝐬𝐜𝐚𝐧𝐟("%𝐝", &𝐦𝐚𝐭𝐫𝐢𝐱[𝐢][𝐣]);
      }
   }
}

// 𝐟𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐭𝐨 𝐦𝐮𝐥𝐭𝐢𝐩𝐥𝐲 𝐭𝐰𝐨 𝐦𝐚𝐭𝐫𝐢𝐜𝐞𝐬
𝐯𝐨𝐢𝐝 𝐦𝐮𝐥𝐭𝐢𝐩𝐥𝐲𝐌𝐚𝐭𝐫𝐢𝐜𝐞𝐬(𝐢𝐧𝐭 𝐟𝐢𝐫𝐬𝐭[][𝟏𝟎],
                      𝐢𝐧𝐭 𝐬𝐞𝐜𝐨𝐧𝐝[][𝟏𝟎],
                      𝐢𝐧𝐭 𝐫𝐞𝐬𝐮𝐥𝐭[][𝟏𝟎],
                      𝐢𝐧𝐭 𝐫𝟏, 𝐢𝐧𝐭 𝐜𝟏, 𝐢𝐧𝐭 𝐫𝟐, 𝐢𝐧𝐭 𝐜𝟐) {

   // 𝐈𝐧𝐢𝐭𝐢𝐚𝐥𝐢𝐳𝐢𝐧𝐠 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐨𝐟 𝐦𝐚𝐭𝐫𝐢𝐱 𝐦𝐮𝐥𝐭 𝐭𝐨 𝟎.
   𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐢 = 𝟎; 𝐢 < 𝐫𝟏; ++𝐢) {
      𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐣 = 𝟎; 𝐣 < 𝐜𝟐; ++𝐣) {
         𝐫𝐞𝐬𝐮𝐥𝐭[𝐢][𝐣] = 𝟎;
      }
   }

   // 𝐌𝐮𝐥𝐭𝐢𝐩𝐥𝐲𝐢𝐧𝐠 𝐟𝐢𝐫𝐬𝐭 𝐚𝐧𝐝 𝐬𝐞𝐜𝐨𝐧𝐝 𝐦𝐚𝐭𝐫𝐢𝐜𝐞𝐬 𝐚𝐧𝐝 𝐬𝐭𝐨𝐫𝐢𝐧𝐠 𝐢𝐭 𝐢𝐧 𝐫𝐞𝐬𝐮𝐥𝐭
   𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐢 = 𝟎; 𝐢 < 𝐫𝟏; ++𝐢) {
      𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐣 = 𝟎; 𝐣 < 𝐜𝟐; ++𝐣) {
         𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐤 = 𝟎; 𝐤 < 𝐜𝟏; ++𝐤) {
            𝐫𝐞𝐬𝐮𝐥𝐭[𝐢][𝐣] += 𝐟𝐢𝐫𝐬𝐭[𝐢][𝐤] * 𝐬𝐞𝐜𝐨𝐧𝐝[𝐤][𝐣];
         }
      }
   }
}

// 𝐟𝐮𝐧𝐜𝐭𝐢𝐨𝐧 𝐭𝐨 𝐝𝐢𝐬𝐩𝐥𝐚𝐲 𝐭𝐡𝐞 𝐦𝐚𝐭𝐫𝐢𝐱
𝐯𝐨𝐢𝐝 𝐝𝐢𝐬𝐩𝐥𝐚𝐲(𝐢𝐧𝐭 𝐫𝐞𝐬𝐮𝐥𝐭[][𝟏𝟎], 𝐢𝐧𝐭 𝐫𝐨𝐰, 𝐢𝐧𝐭 𝐜𝐨𝐥𝐮𝐦𝐧) {

   𝐩𝐫𝐢𝐧𝐭𝐟("\𝐧𝐎𝐮𝐭𝐩𝐮𝐭 𝐌𝐚𝐭𝐫𝐢𝐱:\𝐧");
   𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐢 = 𝟎; 𝐢 < 𝐫𝐨𝐰; ++𝐢) {
      𝐟𝐨𝐫 (𝐢𝐧𝐭 𝐣 = 𝟎; 𝐣 < 𝐜𝐨𝐥𝐮𝐦𝐧; ++𝐣) {
         𝐩𝐫𝐢𝐧𝐭𝐟("%𝐝  ", 𝐫𝐞𝐬𝐮𝐥𝐭[𝐢][𝐣]);
         𝐢𝐟 (𝐣 == 𝐜𝐨𝐥𝐮𝐦𝐧 - 𝟏)
            𝐩𝐫𝐢𝐧𝐭𝐟("\𝐧");
      }
   }
}

𝐢𝐧𝐭 𝐦𝐚𝐢𝐧() {
   𝐢𝐧𝐭 𝐟𝐢𝐫𝐬𝐭[𝟏𝟎][𝟏𝟎], 𝐬𝐞𝐜𝐨𝐧𝐝[𝟏𝟎][𝟏𝟎], 𝐫𝐞𝐬𝐮𝐥𝐭[𝟏𝟎][𝟏𝟎], 𝐫𝟏, 𝐜𝟏, 𝐫𝟐, 𝐜𝟐;
   𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐧𝐭𝐞𝐫 𝐫𝐨𝐰𝐬 𝐚𝐧𝐝 𝐜𝐨𝐥𝐮𝐦𝐧 𝐟𝐨𝐫 𝐭𝐡𝐞 𝐟𝐢𝐫𝐬𝐭 𝐦𝐚𝐭𝐫𝐢𝐱: ");
   𝐬𝐜𝐚𝐧𝐟("%𝐝 %𝐝", &𝐫𝟏, &𝐜𝟏);
   𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐧𝐭𝐞𝐫 𝐫𝐨𝐰𝐬 𝐚𝐧𝐝 𝐜𝐨𝐥𝐮𝐦𝐧 𝐟𝐨𝐫 𝐭𝐡𝐞 𝐬𝐞𝐜𝐨𝐧𝐝 𝐦𝐚𝐭𝐫𝐢𝐱: ");
   𝐬𝐜𝐚𝐧𝐟("%𝐝 %𝐝", &𝐫𝟐, &𝐜𝟐);

   // 𝐓𝐚𝐤𝐢𝐧𝐠 𝐢𝐧𝐩𝐮𝐭 𝐮𝐧𝐭𝐢𝐥
   // 𝟏𝐬𝐭 𝐦𝐚𝐭𝐫𝐢𝐱 𝐜𝐨𝐥𝐮𝐦𝐧𝐬 𝐢𝐬 𝐧𝐨𝐭 𝐞𝐪𝐮𝐚𝐥 𝐭𝐨 𝟐𝐧𝐝 𝐦𝐚𝐭𝐫𝐢𝐱 𝐫𝐨𝐰
   𝐰𝐡𝐢𝐥𝐞 (𝐜𝟏 != 𝐫𝟐) {
      𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐫𝐫𝐨𝐫! 𝐄𝐧𝐭𝐞𝐫 𝐫𝐨𝐰𝐬 𝐚𝐧𝐝 𝐜𝐨𝐥𝐮𝐦𝐧𝐬 𝐚𝐠𝐚𝐢𝐧.\𝐧");
      𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐧𝐭𝐞𝐫 𝐫𝐨𝐰𝐬 𝐚𝐧𝐝 𝐜𝐨𝐥𝐮𝐦𝐧𝐬 𝐟𝐨𝐫 𝐭𝐡𝐞 𝐟𝐢𝐫𝐬𝐭 𝐦𝐚𝐭𝐫𝐢𝐱: ");
      𝐬𝐜𝐚𝐧𝐟("%𝐝%𝐝", &𝐫𝟏, &𝐜𝟏);
      𝐩𝐫𝐢𝐧𝐭𝐟("𝐄𝐧𝐭𝐞𝐫 𝐫𝐨𝐰𝐬 𝐚𝐧𝐝 𝐜𝐨𝐥𝐮𝐦𝐧𝐬 𝐟𝐨𝐫 𝐭𝐡𝐞 𝐬𝐞𝐜𝐨𝐧𝐝 𝐦𝐚𝐭𝐫𝐢𝐱: ");
      𝐬𝐜𝐚𝐧𝐟("%𝐝%𝐝", &𝐫𝟐, &𝐜𝟐);
   }

   // 𝐠𝐞𝐭 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐨𝐟 𝐭𝐡𝐞 𝐟𝐢𝐫𝐬𝐭 𝐦𝐚𝐭𝐫𝐢𝐱
   𝐠𝐞𝐭𝐌𝐚𝐭𝐫𝐢𝐱𝐄𝐥𝐞𝐦𝐞𝐧𝐭𝐬(𝐟𝐢𝐫𝐬𝐭, 𝐫𝟏, 𝐜𝟏);

   // 𝐠𝐞𝐭 𝐞𝐥𝐞𝐦𝐞𝐧𝐭𝐬 𝐨𝐟 𝐭𝐡𝐞 𝐬𝐞𝐜𝐨𝐧𝐝 𝐦𝐚𝐭𝐫𝐢𝐱
   𝐠𝐞𝐭𝐌𝐚𝐭𝐫𝐢𝐱𝐄𝐥𝐞𝐦𝐞𝐧𝐭𝐬(𝐬𝐞𝐜𝐨𝐧𝐝, 𝐫𝟐, 𝐜𝟐);

   // 𝐦𝐮𝐥𝐭𝐢𝐩𝐥𝐲 𝐭𝐰𝐨 𝐦𝐚𝐭𝐫𝐢𝐜𝐞𝐬.
   𝐦𝐮𝐥𝐭𝐢𝐩𝐥𝐲𝐌𝐚𝐭𝐫𝐢𝐜𝐞𝐬(𝐟𝐢𝐫𝐬𝐭, 𝐬𝐞𝐜𝐨𝐧𝐝, 𝐫𝐞𝐬𝐮𝐥𝐭, 𝐫𝟏, 𝐜𝟏, 𝐫𝟐, 𝐜𝟐);

   // 𝐝𝐢𝐬𝐩𝐥𝐚𝐲 𝐭𝐡𝐞 𝐫𝐞𝐬𝐮𝐥𝐭
   𝐝𝐢𝐬𝐩𝐥𝐚𝐲(𝐫𝐞𝐬𝐮𝐥𝐭, 𝐫𝟏, 𝐜𝟐);

   𝐫𝐞𝐭𝐮𝐫𝐧 𝟎;
}
